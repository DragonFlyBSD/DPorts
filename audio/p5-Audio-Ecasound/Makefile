# $FreeBSD: audio/p5-Audio-Ecasound/Makefile 327706 2013-09-20 14:36:35Z bapt $

PORTNAME=	Audio-Ecasound
PORTVERSION=	1.01
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for ecasound sampler, recorder, fx-processor

BUILD_DEPENDS=	libecasoundc-config:${PORTSDIR}/audio/ecasound

USES=		perl5
NO_STAGE=	yes
USE_PERL5=	configure

MAN3=	Audio::Ecasound.3

.include <bsd.port.mk>
