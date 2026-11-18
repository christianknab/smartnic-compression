package zfp_types_pkg;

    typedef struct packed {
        logic [31:0] stream;
        logic [4:0] max_pos;
        logic [7:0] exponent;
        
        
    } zfp_comp_data_t;

    typedef enum logic [1:0] {
        WIDTH_21 = 2'b00,
        WIDTH_29 = 2'b01,
        WIDTH_45 = 2'b10
    } width_mode_t;

    typedef enum logic [1:0]{
        S_FIRST = 2'b00,
        S_DURING = 2'b01,
        S_LAST = 2'b11
    } gear_states_t;

endpackage
