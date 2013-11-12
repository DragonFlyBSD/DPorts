# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: www/p5-WebService-MoviePosterDB/Makefile 333137 2013-11-07 16:38:13Z vanilla $

PORTNAME=	WebService-MoviePosterDB
PORTVERSION=	0.18
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl interface to MoviePosterDB

BUILD_DEPENDS=	p5-Cache-Cache>=0:${PORTSDIR}/devel/p5-Cache-Cache \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-JSON>=0:${PORTSDIR}/converters/p5-JSON \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
