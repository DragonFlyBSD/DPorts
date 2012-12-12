# New ports collection makefile for:	p5-Net-XWhois
# Date created:				11 June 2001
# Whom:	      				Danny Howard <dannyman@tellme.com>
#
# $FreeBSD: ports/net/p5-Net-XWhois/Makefile,v 1.16 2012/11/17 06:00:12 svnexp Exp $
#

PORTNAME=	Net-XWhois
PORTVERSION=	0.90
PORTREVISION=	4
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Whois Client Interface for Perl5

PERL_CONFIGURE=	YES

MAN3=		Net::XWhois.3

post-patch:
	@${FIND} ${WRKSRC} -type f -name "*.orig" -delete

.include <bsd.port.mk>
