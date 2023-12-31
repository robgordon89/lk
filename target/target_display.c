/* Copyright (c) 2012-2014, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of The Linux Foundation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#include <err.h>
#include <debug.h>
#include <platform.h>

__WEAK int mdp_lcdc_config(void)
{
	return 0;
}
__WEAK int lvds_on()
{
	return 0;
}
__WEAK int mdp_lcdc_on()
{
	return 0;
}
__WEAK int mdp_lcdc_off()
{
	return 0;
}
__WEAK int target_display_pre_on()
{
	return 0;
}
__WEAK int target_display_post_on()
{
	return 0;
}
__WEAK int target_display_pre_off()
{
	return 0;
}
__WEAK int target_display_post_off()
{
	return 0;
}

__WEAK void target_edp_panel_init(struct msm_panel_info *pinfo)
{
	return;
}

__WEAK int target_edp_panel_clock(uint8_t enable, struct msm_panel_info *pinfo)
{
	return 0;
}

__WEAK int target_edp_panel_enable(void)
{
	return 0;
}

__WEAK int target_edp_panel_disable(void)
{
	return 0;
}

__WEAK int target_edp_bl_ctrl(int enable)
{
	return 0;
}

__WEAK int target_hdmi_panel_clock(uint8_t enable, struct msm_panel_info *pinfo)
{
	return 0;
}

__WEAK int target_hdmi_regulator_ctrl(bool enable)
{
	return 0;
}
__WEAK int mdss_hdmi_init(void)
{
	return 0;
}

__WEAK int target_hdmi_gpio_ctrl(bool enable)
{
	return 0;
}
