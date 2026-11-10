#include <stdio.h>
#include <string.h>

/*输入一行文本，统计其中每个单词出现的次数。单词不区分大小写，文本中可能包含标点符号，输出按单词字典序输出。*/

int main() {
	char words[1001][101];
	int wc[1001] = {0};
	int wwl = 0;

	char s[3000];
	fgets(s, 3000, stdin);

	int i = 0;
	for (;;) {
		char word[100] = {0};
		int wl = 0;

		while (s[i] != 0 && !(('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z'))) {
			i++;
		}
		if (s[i] == 0) break;

		word[wl++] = s[i++];
		while ('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z') {
			word[wl++] = s[i++];
		}
		word[wl] = 0;

		int j = 0;
		for (; j < wwl; j++) {
			if (strcmp(word, words[j]) == 0) {
				wc[j]++;
				break;
			}
		}
		if (j >= wwl) {
			strcpy(words[wwl], word);
			wc[wwl] = 1;
			wwl++;
		}
	}

	for (int i = 1; i < wwl; i++) {
		char ts[100];
		int tc;

		strcpy(ts, words[i]);
		tc = wc[i];

		int j = i - 1;
		while (j >= 0 && strcmp(words[j], ts) > 0) {
			strcpy(words[j + 1], words[j]);
			wc[j + 1] = wc[j];
			j--;
		}
		strcpy(words[j + 1], ts);
		wc[j + 1] = tc;
	}

	for (int i = 0; i < wwl; i++) {
		printf("%s: %d\n", words[i], wc[i]);
	}

	return 0;
}

int main1() {
	char words[1001][101];
	int wc[1001] = {0};
	int wwl = 0;

	char s[3000];
	fgets(s, 3000, stdin);

	int inner = 0;
	char word[101] = {0};
	char wl = 0;
	for (int i = 0; i < strlen(s); i++) {
		char c = s[i];
		if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z') {
			if (inner) {
				word[wl++] = c;
			} else {
				wl = 0;
				word[wl++] = c;
				inner = 1;
			}
		} else { // 非字母
			if (inner) {
				word[wl] = 0;

				int j = 0;
				for (; j < wwl; j++) {
					if (strcmp(word, words[j]) == 0) {
						wc[j]++;
						break;
					}
				}
				if (j >= wwl) {
					strcpy(words[wwl], word);
					wc[wwl] = 1;
					wwl++;
				}

				inner = 0;
			}
		}
	}

	for (int i = 1; i < wwl; i++) {
		char ts[100];
		int tc;

		strcpy(ts, words[i]);
		tc = wc[i];

		int j = i - 1;
		while (j >= 0 && strcmp(words[j], ts) > 0) {
			strcpy(words[j + 1], words[j]);
			wc[j + 1] = wc[j];
			j--;
		}
		strcpy(words[j + 1], ts);
		wc[j + 1] = tc;
	}

	for (int i = 0; i < wwl; i++) {
		printf("%s: %d\n", words[i], wc[i]);
	}

	return 0;
}

