# Created by: devin@spamcop.net
# $FreeBSD: net/p5-Net-SNPP/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-SNPP
PORTVERSION=	1.17
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Net::SNPP - Perl Simple Network Pager Protocol Client

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::SNPP.3 \
		Net::SNPP::Server.3

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -i '' -e '/warnings/d' \
		${WRKSRC}/lib/Net/SNPP/Server.pm
	@${RM} ${WRKSRC}/lib/Net/SNPP/Server.pm.orig

.include <bsd.port.mk>
