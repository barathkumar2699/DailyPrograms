#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[1000][2000];
    char t[2000];
    int n;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s[^\n]",s[i]);
    }

    if(n==3)
    {

       // printf("%s\n%s\n%s\n",s[0],s[2],s[1]);
       // exit(0);
       // return 0;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                //printf("%d",strcmp(s[i],s[j]));

                strcpy(t,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],t);

            }
        }

    }
    for(int i=n-1;i>=0;i--){
    printf("%s\n",s[i]);
    }



}


/*

3
yexouysxlxuhoqzmulamtakpbltqqeyomkkvttjovooqndjfuxahovzbctljuxzjjwdqjwumamfbnvskmuvznlryospzwaevrtpnqqcezcnxnpkpoucpatpjvfxwefhjoyafyyguagjkmrudmsovhtswuwqaqthoukfwxrvvbpjwubwdpumrhlqzsugdvxusjntkjfppgttpcfogbbnewjnmnnozxysexhayxumoeowzpkjxhwqvgfqnoszyqoldftelbllyqrndhjbaonzcbxrpfcwgfpowppwrofbgqfgztnorzxojufhaguokuamnpmxjzpjahlyropobdujmwmevsgnerotuayvfwtfuepbbzjgddawtmvorspfjnlkahsmgbkodvycbrfgvjnltsrouflzleyzafgjfpwqrvdwfucvmkzqdgdebftgyzquqkwedxefeugaluccubfdacsytgazebgjzfwgmuxcbkmzexmfyjwfvlcwghczdjssbedhanpsnyhtwnbgqbcxgbovxoctfdjmyzzslefkrujlkrpzbtaqwahqcenktyaffbhvxdkoqztdgkkexdndqjkkkaezmaxtuumbnqcvbebbamjcplllagvkupmmwydbadfnuonoznvrxgbahzwflvuqwogjsaljraqsakskjxjkrdycrlspcpuvfacodgbwzhjvdrkltkuojydlefzxkafnjqrmfjjnnjzeglrcucmvgtsgajbhapfpchufwxzvcuctrmaotrfhozhknhypzsmmscpfglawkpnpclayuposazsoqqgjazsxudxhlvglosedqtzkbhwgyjzujwaxssjmodpnzvyrwepwqcrdlhxnnlacqmsfgklcoxnxouhtzodgrzyhawlyhywlxfcnzblceallxoognassnbzvcbmjgdupjtsxzswnkrsndohdasoffndwlldncayvlcucoxljjcflpzophzjuremhb
hdfguyewgfreujfbrh
rebeurgheuyrgerhereryefbdhjfbdhjbalnfdkjfbueh

*/
