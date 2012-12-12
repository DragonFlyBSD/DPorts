# New ports collection makefile for:	CGI::Pager
# Date created:		03 Jun 2009
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-CGI-Pager/Makefile,v 1.3 2012/11/17 06:02:46 svnexp Exp $
#

PORTNAME=	CGI-Pager
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to generate HTML pagination linkage easily

BUILD_DEPENDS=	p5-URI>0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	CGI::Pager.3

.include <bsd.port.mk>
