#CONFIG?=
#TOOL?=
#CPU?=

#XYZs = \
#    dog.c:pull_tail:bark  \
#    duck.c:chase:quack \
#    cow.c:tip:moo

#all:
#    @- $(foreach XYZ,$(XYZs), \
#        $(eval X = $(word 1,$(subst :, ,$(XYZ)))) \
#        $(eval Y = $(word 2,$(subst :, ,$(XYZ)))) \
#        $(eval Z = $(word 3,$(subst :, ,$(XYZ)))) \
#        \
#        $(CC) $X -o bully/$Y ; \
#        ln bully/$Y sounds/$Z ; \
#    )