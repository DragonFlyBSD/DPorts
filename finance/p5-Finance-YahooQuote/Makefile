# New ports collection makefile for:	Finance::YahooQuote
# Date created:				2009-10-06
# Whom:					Yen-Ming Lee <leeym@FreeBSD.org>
#
# $FreeBSD: ports/finance/p5-Finance-YahooQuote/Makefile,v 1.4 2012/11/17 05:57:26 svnexp Exp $
#

PORTNAME=	Finance-YahooQuote
PORTVERSION=	0.24
CATEGORIES=	finance perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	leeym@FreeBSD.org
COMMENT=	Get stock quotes from Yahoo! Finance

RUN_DEPENDS=	p5-HTML-Parser>=2.2:${PORTSDIR}/www/p5-HTML-Parser \
		p5-libwww>=1.62:${PORTSDIR}/www/p5-libwww
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN1=		yahooquote.1
MAN3=		Finance::YahooQuote.3

.include <bsd.port.mk>
