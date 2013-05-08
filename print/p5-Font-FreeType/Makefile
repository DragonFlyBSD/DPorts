# Created by: Jun Kuriyama <kuriyama@FreeBSD.org>
# $FreeBSD: print/p5-Font-FreeType/Makefile 316355 2013-04-23 14:20:25Z bapt $

PORTNAME=	Font-FreeType
PORTVERSION=	0.03
CATEGORIES=	print perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to read font files and render glyphs using FreeType2

LIB_DEPENDS=	freetype.9:${PORTSDIR}/print/freetype2

PERL_CONFIGURE=	yes
USES=		pkgconfig

MAN3=	Font::FreeType.3 \
	Font::FreeType::Face.3 \
	Font::FreeType::Glyph.3

.include <bsd.port.mk>
