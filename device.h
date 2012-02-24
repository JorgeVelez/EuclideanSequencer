
#define SEQUENCER_STEP_A_CONTROL            0
#define SEQUENCER_STEP_B_CONTROL            1
#define SEQUENCER_FILL_A_CONTROL            2
#define SEQUENCER_FILL_B_CONTROL            3
#define SEQUENCER_ROTATE_A_CONTROL          4
#define SEQUENCER_ROTATE_B_CONTROL          5

#define SEQUENCER_CLOCK_PORT                PORTD
#define SEQUENCER_CLOCK_DDR                 DDRD
#define SEQUENCER_CLOCK_PIN                 _BV(PORTD2)

#define SEQUENCER_OUTPUT_PORT               PORTD
#define SEQUENCER_OUTPUT_DDR                DDRD
#define SEQUENCER_OUTPUT_PIN_A              _BV(PORTD6)
#define SEQUENCER_OUTPUT_PIN_B              _BV(PORTD7)

#define SEQUENCER_TRIGGER_SWITCH_PORT       PORTD
#define SEQUENCER_TRIGGER_SWITCH_DDR        DDRD
#define SEQUENCER_TRIGGER_SWITCH_PIN_A      _BV(PORTD4)
#define SEQUENCER_TRIGGER_SWITCH_PIN_B      _BV(PORTD5)

#define SEQUENCER_ALTERNATE_SWITCH_PORT     PORTB
#define SEQUENCER_ALTERNATE_SWITCH_DDR      DDRB
#define SEQUENCER_ALTERNATE_SWITCH_PIN_A    _BV(PORTB0)
#define SEQUENCER_ALTERNATE_SWITCH_PIN_B    _BV(PORTB1)
