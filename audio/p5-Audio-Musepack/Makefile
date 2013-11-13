# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: audio/p5-Audio-Musepack/Makefile 332336 2013-11-01 02:28:24Z vanilla $

PORTNAME=	Audio-Musepack
PORTVERSION=	1.0.1
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface to Musepack file information and APE tag fields

BUILD_DEPENDS=	p5-MP3-Info>=1.20:${PORTSDIR}/audio/p5-MP3-Info \
		p5-Audio-Scan>=0.85:${PORTSDIR}/audio/p5-Audio-Scan
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
