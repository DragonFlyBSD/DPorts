# New ports collection makefile for:	Net-SNPP
# Date created:		6 Jun 2002
# Whom:			devin@spamcop.net
#
# $FreeBSD: ports/net/p5-Net-SNPP/Makefile,v 1.14 2012/11/17 06:00:11 svnexp Exp $
#

PORTNAME=	Net-SNPP
PORTVERSION=	1.17
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Net::SNPP - Perl Simple Network Pager Protocol Client

PERL_CONFIGURE=	yes

MAN3=		Net::SNPP.3 \
		Net::SNPP::Server.3

post-patch:
	@${PERL} -pi -e '$$_="" if /warnings/;' \
		${WRKSRC}/lib/Net/SNPP/Server.pm
	@${RM} ${WRKSRC}/lib/Net/SNPP/Server.pm.orig

.include <bsd.port.mk>
