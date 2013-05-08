# New ports collection makefile for:	Text::Iconv
# Date created:		26 Dec 2000
# Whom:			Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: converters/p5-Text-Iconv/Makefile 316654 2013-04-27 08:50:46Z mva $
#

PORTNAME=	Text-Iconv
PORTVERSION=	1.7
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to iconv() codeset conversion function

USES=	iconv

PERL_CONFIGURE=	yes
CONFIGURE_ARGS+=	INC="-I${LOCALBASE}/include" \
		LIBS="-L${LOCALBASE}/lib -liconv"

MAN3=		Text::Iconv.3

.include <bsd.port.mk>
