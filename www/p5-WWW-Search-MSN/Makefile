# New ports collection makefile for:	p5-WWW-Search-MSN
# Date created:		2006-07-14
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/www/p5-WWW-Search-MSN/Makefile,v 1.11 2012/11/17 06:02:55 svnexp Exp $
#

PORTNAME=	WWW-Search-MSN
PORTVERSION=	0.0106
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Backend for searching search.msn.com

BUILD_DEPENDS=	p5-HTML-Tree>=0:${PORTSDIR}/www/p5-HTML-Tree \
		p5-WWW-Search>=0:${PORTSDIR}/www/p5-WWW-Search
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		WWW::Search::MSN.3

.include <bsd.port.mk>
