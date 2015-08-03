/*
 * Copyright Brian Starkey 2014 <stark3y@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __I2C_SLAVE_DEFS__
#define __I2C_SLAVE_DEFS__

/* Set these appropriately for your platform */
#define USI_PORT PORTB
#define USI_DDR DDRB
#define I2C_SDA 5
#define I2C_SCL 7

#define N_LEDS 16
#define I2C_N_GLB_REG 4
#define I2C_N_REG (I2C_N_GLB_REG + (N_LEDS * 3))
#define I2C_SLAVE_ADDR 0x40

/*
 * The library supports a write mask for each individual register (bits set are
 * writable) in the i2c_w_mask array. If you don't care about masks for each
 * individual register, you can define a global value to be used for all
 * registers here, saving flash and RAM
 */
#define I2C_GLOBAL_WRITE_MASK 0xFF

#define REG_CTRL    i2c_reg[0]
#define     CTRL_RST    (1 << 0)
#define     CTRL_GLB    (1 << 1)
#define REG_GLB_G   i2c_reg[1]
#define REG_GLB_R   i2c_reg[2]
#define REG_GLB_B   i2c_reg[3]

#endif /* __I2C_SLAVE_DEFS__ */
