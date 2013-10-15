# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: audio/p5-Music-Audioscrobbler-Submit/Makefile 327706 2013-09-20 14:36:35Z bapt $

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
NO_STAGE=	yes
USE_PERL5=	configure

MAN3=	Music::Audioscrobbler::Submit.3

.include <bsd.port.mk>
