# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: x11-themes/clearlooks-themes/Makefile 327783 2013-09-20 23:54:03Z bapt $

PORTNAME=	clearlooks
PKGNAMESUFFIX+=	-themes

COMMENT=	Clearlooks themes with the engine coming from gtk-engines2

MASTERDIR=	${.CURDIR}/../../x11-themes/clearlooks

NO_STAGE=	yes
pre-patch:
.for f in themes/Clearlooks/gtk-2.0/gtkrc \
    themes/Clearlooks-DeepSky/gtk-2.0/gtkrc \
    themes/Clearlooks-Olive/gtk-2.0/gtkrc \
    themes/Clearlooks-Quicksilver/gtk-2.0/gtkrc
	@${REINPLACE_CMD} -e 's#.*menuitemstyle.*##' \
		-e 's#.*listviewitemstyle.*##' \
		-e 's#.*progressbarstyle.*##' \
		${WRKSRC}/${f}
.endfor

.include "${MASTERDIR}/Makefile"
