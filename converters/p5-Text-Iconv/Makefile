# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: converters/p5-Text-Iconv/Makefile 326307 2013-09-04 18:06:07Z madpilot $

PORTNAME=	Text-Iconv
PORTVERSION=	1.7
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to iconv() codeset conversion function

USES=		perl5 iconv
USE_PERL5=	configure
CONFIGURE_ARGS+=	INC="-I${LOCALBASE}/include" \
		LIBS="-L${LOCALBASE}/lib ${ICONV_LIB}"

MAN3=		Text::Iconv.3

.include <bsd.port.mk>
