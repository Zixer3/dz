#include <stdio.h>

int main(void){
    //инициализация массивов процессора и памяти
    int cpu_state[8] = {0};
    int memory[256] = {0};
    

    for(int i = 0; i < 256; i++){
        scanf("%d", &memory[i]); //после компиляции ./{название исполняемого файла} < program.txt
    }

    //инициализация cpu_state
    cpu_state[0] = 6;   //будущая
    cpu_state[1] = 0;   //текущий результат
    cpu_state[2] = 0;   // выполняемая
    cpu_state[3] = memory[0];   //вектор прерываний
    cpu_state[4] = 0;   //флаг остановки
    cpu_state[5] = 0;   //код ошибки
    cpu_state[6] = 0;   //резерв по заданию
    cpu_state[7] = 0;   // резерв по заданию


    while ((cpu_state[4] == 0) && (cpu_state[5] == 0)){
        int current_pc = cpu_state[0];

        if (cpu_state[0] < 0 || cpu_state[0] >= 256) { //проверка на вхождение cpu_state[0] в рамки массива памяти
            cpu_state[5] = 1;
            cpu_state[0] = cpu_state[3];
            continue;
        }

        cpu_state[2] = memory[cpu_state[0]];

        if (cpu_state[2] != 0){ //проверка на операнд во всех операциях, кроме HALT
            if (cpu_state[0] + 1 >= 256 || cpu_state[0] < 0) { //если операнд вне памяти, происходит переход на вектор прерываний
                cpu_state[5] = 2;
                cpu_state[0] = cpu_state[3];
                continue; //цикл с нового pc
            }
            
            int addr = cpu_state[0] + 1; // адрес ячейки с операндом
            int operand_value = memory[addr]; // значение операнда 

            if (operand_value < 0 || operand_value >= 256) { // код ошибки и переход на вектор прерываний
                cpu_state[5] = 1; 
                cpu_state[0] = cpu_state[3]; 
                continue; 
            }

            switch (cpu_state[2])   
            {
                case 1: // LOAD
                    cpu_state[1] = memory[operand_value];
                    break;
                case 2: // MUL
                    cpu_state[1] *= memory[operand_value];
                    break;
                case 3: // DIV
                    if (memory[operand_value] == 0) {
                        cpu_state[5] = 2; // код ошибки: деление на ноль
                        cpu_state[0] = cpu_state[3];
                        continue;
                    }
                    cpu_state[1] /= memory[operand_value];
                    break;
                case 4: // JUMP
                    cpu_state[0] = operand_value;
                    break;
                case 5: // JUMP_IF_ZERO
                    if (cpu_state[1] == 0)
                    {
                        cpu_state[0] = operand_value;
                    }
                    else cpu_state[0] += 2; // Переход к следующей инструкции, если условие не выполнено
                    break;
                default:
                    cpu_state[5] = 2; // код ошибки стандартный
                    cpu_state[0] = cpu_state[3]; // переход на вектор прерываний
                    continue; // цикл заново с нового pc
            }
            
            printf("pc=%d: команда %d, operand=%d, acc=%d\n", current_pc, cpu_state[2], operand_value, cpu_state[1]);
        }

        else // HALT
        {
            printf("pc=%d: command 0, acc=%d\n", current_pc, cpu_state[1]);
            cpu_state[4] = 1;
            continue; // перевод флага работы в 1, 
            //переход к следующей итерации для исключения варианта продолжения работы после смены флага
        }
        //переход к следующей инструкции с шагом 2, пропуская операнды
        if (cpu_state[2] != 4 && cpu_state[2] != 5) {
            cpu_state[0] += 2;
        }
    }

    switch (cpu_state[5]) //вывод кода ошибки
    {
        case 0:
            printf("Программа успешно завершена.\n");
            break;
        case 1:
            printf("Программа завершена с ошибкой: деление на ноль.\n");
            break;
        default: //если кейс любой иной кроме 0 и 1, программа просто выходит с неизвестной ошибкой
            printf("Программа завершена с ошибкой.\n");
            break;
    }


    return 0;
}