# Created by: Peter Pentchev <roam@FreeBSD.org>
# $FreeBSD: audio/p5-Audio-Scrobbler/Makefile 332336 2013-11-01 02:28:24Z vanilla $

PORTNAME=	Audio-Scrobbler
PORTVERSION=	0.01
PORTREVISION=	2
CATEGORIES=	audio net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl interface to Last.fm and AudioScrobbler

BUILD_DEPENDS=	p5-Config-IniFiles>=0:${PORTSDIR}/devel/p5-Config-IniFiles \
		p5-libwww>=5:${PORTSDIR}/www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
