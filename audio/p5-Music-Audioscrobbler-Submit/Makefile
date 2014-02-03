# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: audio/p5-Music-Audioscrobbler-Submit/Makefile 341813 2014-01-30 08:45:50Z az $

PORTNAME=	Music-Audioscrobbler-Submit
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Module to submit songs to last.fm from MPD

BUILD_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Config-Options>=0.8:${PORTSDIR}/devel/p5-Config-Options
RUN_DEPENDS:=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-Config-Options>=0.8:${PORTSDIR}/devel/p5-Config-Options

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
