# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: devel/pear-FSM/Makefile 333263 2013-11-08 21:41:53Z antoine $

PORTNAME=	FSM
PORTVERSION=	1.3.1
CATEGORIES=	devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR Finite State Machine

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

PEAR_AUTOINSTALL=	yes

LATEST_LINK=	pear-${PORTNAME}
OPTIONS_DEFINE=	PEAR_GRAPGHVIZ
PEAR_GRAPGHVIZ_DESC=	PEAR::GraphViz support

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MPEAR_GRAPHVIZ}
RUN_DEPENDS+=	${PEARDIR}/GraphViz.php:${PORTSDIR}/graphics/pear-Image_GraphViz
.endif

.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.mk>
