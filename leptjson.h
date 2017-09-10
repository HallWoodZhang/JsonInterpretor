#ifndef LEPTJSON_H__
#define LEPTJSON_H__

typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, \
    LEPT_ARRA} lept_type;

typedef struct {
    lept_type type;
} lept_value;

int lept_parse(lept_value* v, const char* json);



#endif /* LEPTJSON_H__ */
