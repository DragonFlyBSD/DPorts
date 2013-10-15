# Created by: wosch
# $FreeBSD: german/dict/Makefile 327732 2013-09-20 18:30:00Z bapt $

PORTNAME=	dict
PORTVERSION=	1.2
CATEGORIES=	german
MASTER_SITES=	http://wolfram.schneider.org/src/
DISTNAME=	dict-${PORTVERSION}
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${dict}.gz
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	wosch@FreeBSD.org
COMMENT=	Simple English/German dictionary

RUN_DEPENDS=	agrep:${PORTSDIR}/textproc/agrep

dict=		ger-eng.txt

post-extract: ${dict}
NO_STAGE=	yes
${dict}:
	${GZCAT} < ${DISTDIR}/${dict}.gz > ${WRKSRC}/${.TARGET}

.include <bsd.port.mk>
