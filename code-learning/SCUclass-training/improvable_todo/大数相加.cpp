#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    while (n--) {
        char a[505], b[505];
        int c[510] = {0}; // 结果数组，初始全为0
        
        // 1. 直接读入字符串（不用管回车，%s会自动跳过）
        scanf("%s %s", a, b);
        
        int len_a = strlen(a);
        int len_b = strlen(b);
        
        int i = len_a - 1; // 指向 a 的个位
        int j = len_b - 1; // 指向 b 的个位
        int k = 0;         // 结果 c 的下标（也是从个位开始存）
        int carry = 0;     // 进位
        
        // 2. 核心加法逻辑：只要 a 或 b 没算完，或者还有进位，就继续
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry; // 先把进位加进来
            
            if (i >= 0) {
                sum += a[i] - '0'; // 将字符转为数字，并累加
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0'; // 将字符转为数字，并累加
                j--;
            }
            
            // 处理当前位的值和新的进位
            c[k] = sum % 10;  // 当前位留下的数字
            carry = sum / 10; // 进位给下一位
            k++; // 结果数组往高位走
        }
        
        // 3. 输出结果：注意！我们的 c 数组是倒着存的，所以打印也要倒着打
        for (int p = k - 1; p >= 0; p--) {
            printf("%d", c[p]);
        }
        printf("\n"); // 每组数据输出后换行
    }
    
    return 0;
}