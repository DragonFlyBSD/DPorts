# Created by: Dominique Goncalves <dominique.goncalves@gmail.com>
# $FreeBSD: audio/p5-Ogg-Vorbis-Header-PurePerl/Makefile 336166 2013-12-11 14:35:36Z bapt $

PORTNAME=	Ogg-Vorbis-Header-PurePerl
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	audio perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=Ogg
PKGNAMEPREFIX=	p5-

MAINTAINER=	dominique.goncalves@gmail.com
COMMENT=	Manipulate / fetch info from Ogg-Vorbis audio files

LIB_DEPENDS=	libogg.so:${PORTSDIR}/audio/libogg \
		libvorbis.so:${PORTSDIR}/audio/libvorbis

USES=		perl5
NO_STAGE=	yes
USE_PERL5=	configure

MAN3=		Ogg::Vorbis::Header::PurePerl.3

.include <bsd.port.mk>
