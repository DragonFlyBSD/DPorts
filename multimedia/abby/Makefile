# Created by: Toni Gundogdu <legatvs@gmail.com>
# $FreeBSD: multimedia/abby/Makefile 330227 2013-10-13 13:03:03Z makc $

PORTNAME=	abby
PORTVERSION=	0.4.8
PORTREVISION=	3
CATEGORIES=	multimedia net
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Front-end for c/clive

OPTIONS_DEFINE=	CCLIVE
OPTIONS_DEFAULT=	CCLIVE
CCLIVE_DESC=	Use cclive backend (instead of clive)

USES=		qmake
USE_BZIP2=	yes
USE_QT4=	gui network xml moc_build qmake_build rcc_build uic_build

PLIST_FILES=	bin/abby

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MCCLIVE}
RUN_DEPENDS+=	cclive>=0.5.6:${PORTSDIR}/multimedia/cclive
.else
RUN_DEPENDS+=	clive>=2.2.5:${PORTSDIR}/multimedia/clive
.endif

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/abby ${STAGEDIR}${PREFIX}/bin/abby

.include <bsd.port.mk>
