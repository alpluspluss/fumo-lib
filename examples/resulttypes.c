// #include "fumo/fumo_data_structures.h"
// #include "fumo/fumo_type_name.h"
//
// Result get_input() {
//     int n = 0;
//     if (scanf("%d", &n)) {
//         return Ok(n);
//     }
//     return Err("scanf failed bruh.\n");
// }
//
// int main() {
//
//     match(get_input())({
//         _Ok(char*, var) printf("_Ok: %s.\n", *var);
//         _Err(char*, errval) {
//             printf("error message: %s", *errval);
//         }
//     });
// }
