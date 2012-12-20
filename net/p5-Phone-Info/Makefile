# New ports collection makefile for:	net/p5-Phone-Info
# Date created:				16 Oct 2010
# Whom:	      				Zane C. Bowers <vvelox@vvelox.net>
#
# $FreeBSD: ports/net/p5-Phone-Info/Makefile,v 1.4 2012/11/17 06:00:13 svnexp Exp $
#

PORTNAME=	Phone-Info
PORTVERSION=	0.0.1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VVELOX
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	Provides a nicer CLI interface to Net::WhitePages

RUN_DEPENDS=	p5-Net-WhitePages>=0:${PORTSDIR}/net/p5-Net-WhitePages

PERL_CONFIGURE=	yes

MAN3=		Phone::Info.3

.include <bsd.port.mk>
