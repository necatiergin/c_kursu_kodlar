int main(void)
{
    int x = 10;
    int *ip = x;        //int türünden int * türüne örtülü dönüşüm var. (Bu bildirim yanlış- C++ dilinde sentaks hatası)
    double *dp = &x;    //int* türünden double * türüne örtülü dönüşüm var.(Bu bildirim yanlış- C++ dilinde sentaks hatası)
}
