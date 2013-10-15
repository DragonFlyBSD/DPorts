# Created by: Tobias Rehbein <tobias.rehbein@web.de>
# $FreeBSD: audio/p5-MusicBrainz-DiscID/Makefile 327706 2013-09-20 14:36:35Z bapt $

PORTNAME=	MusicBrainz-DiscID
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobias.rehbein@web.de
COMMENT=	Perl interface for the MusicBrainz libdiscid library

BUILD_DEPENDS=	p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod
LIB_DEPENDS=	discid.0:${PORTSDIR}/audio/libdiscid
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		pkgconfig perl5
NO_STAGE=	yes
USE_PERL5=	modbuild

MAN3=		MusicBrainz::DiscID.3

.include <bsd.port.mk>
