# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/converters/p5-Text-Iconv/Makefile 332379 2013-11-01 14:20:56Z vanilla $

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

.include <bsd.port.mk>
