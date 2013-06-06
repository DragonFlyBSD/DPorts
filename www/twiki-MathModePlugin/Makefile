# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: www/twiki-MathModePlugin/Makefile 317899 2013-05-11 17:58:55Z hrs $

PORTNAME=	MathModePlugin
SVNREV=		15934
MASTER_SITES=	http://protey.ru/freebsd/distfiles/ \
		${MASTER_SITE_LOCAL:S!$!skv/!}

COMMENT=	Include LaTeX formatted math in your TWiki pages

RUN_DEPENDS=	convert:${PORTSDIR}/graphics/ImageMagick

USE_TEX=	base latex

post-patch:
	${REINPLACE_CMD} -i '' -e 's!=/usr/bin!=${LOCALBASE}/bin!g; s!=/bin!=/usr/bin!g;' \
		${WRKSRC}/pub/TWiki/MathModePlugin/latex2img

.include "${.CURDIR}/../twiki/bsd.twiki.mk"
.include <bsd.port.mk>
