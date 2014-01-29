# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: www/p5-Template-Plugin-MP3/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Template-Plugin-MP3
PORTVERSION=	1.02
CATEGORIES=	www textproc audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	TT Plugin that wraps around the MP3::Info module

BUILD_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit \
		p5-MP3-Info>=0:${PORTSDIR}/audio/p5-MP3-Info
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
