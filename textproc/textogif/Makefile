# Created by: Nicola Vitale	<nivit@email.it>
# $FreeBSD: textproc/textogif/Makefile 326949 2013-09-11 07:40:59Z az $

PORTNAME=	textogif
PORTVERSION=	1.1
PORTREVISION=	4
CATEGORIES=	textproc math www
MASTER_SITES=	http://www.fourmilab.ch/webtools/textogif/download/ \
		http://nivi.interfree.it/distfiles/${PORTNAME}/
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	A Perl script to convert LaTeX formulas into GIFs

RUN_DEPENDS=	ppmtogif:${PORTSDIR}/graphics/netpbm

NO_BUILD=	yes
USE_TEX=	latex dvipsk
USES=		perl5
USE_PERL5=	run

do-install:
	@cd ${WRKDIR};\
	${INSTALL_SCRIPT} ${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
