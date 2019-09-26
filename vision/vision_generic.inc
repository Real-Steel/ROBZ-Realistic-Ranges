;= START =====================================


(define "vision_human"
    ("radius" r(300))
    {rules
        {human 1.5
            {firing 1.65
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_humancrew"
    ("radius" r(400))
    {rules
        {human 1.5
            {firing 1.60
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic"
    ("radius" r(600))
    {rules
        {human 1.25
            {firing 1.35
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_1x"
    ("radius" r(600)) ;500
    {rules
        {human 1.25
            {firing 1.35
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_1-9x"
    ("radius" r(600)) ;500
    {rules
        {human 1.25
            {firing 1.35
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_2-5x"
    ("radius" r(700)) ;700
    {rules
        {human 1.25
            {firing 1.35
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)
(define "vision_optic_3x"
    ("radius" r(700)) ;800
    {rules
        {human 1.25 ;1.20
            {firing 1.35 ;1.30
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic_4x"
    ("radius" r(800)) ;1000
    {rules
        {human 1.25 ;1.10
            {firing 1.35 ;1.20
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic_5x"
    ("radius" r(800)) ;1200
    {rules
        {human 1.25 ;1.00
            {firing 1.35 ;1.10
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_optic_6x"
    ("radius" r(900)) ;1400
    {rules
        {human 1.25 ;0.90
            {firing 1.35 ;1.00
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_gunner"
    ("radius" r(400))
    {rules
        {human 1.25
            {firing 1.35
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "vision_turret"
    ("radius" r(400))
    {rules
        {human 1.25
            {firing 1.35
				("firing")
            }
			("vision")
        }
		("cannon")
		("tank")
    }
    {mods
        {stand 1}
    }
)

(define "glass"
		("radius" r(%0))
        {rules
            {zero 0}
        }
)

;= MAP HELPER ====================================

(define "ultra_vision"
	{radius 20}
	{h_fov 360}
   	{v_fov 180}
	{uncover %range}
)
{"start_point"  ("ultra_vision" range(20))}
{"map_point"    ("ultra_vision" range(20))}
{"flag_point"   ("ultra_vision" range(20))}
