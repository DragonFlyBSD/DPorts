# Created by: Peter Pentchev <roam@FreeBSD.org>
# $FreeBSD: audio/p5-Audio-Scrobbler/Makefile 324171 2013-08-02 18:21:05Z az $

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

MAN1=		scrobbler-helper.1
MAN3=		Audio::Scrobbler.3

.include <bsd.port.mk>
