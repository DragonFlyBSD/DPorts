# New ports collection makefile for:	p5-SCGI
# Date created:				Fri Jan  5 13:55:53 EST 2007
# Whom:					Vivek Khera <vivek@khera.org>
#
# $FreeBSD: ports/www/p5-SCGI/Makefile,v 1.6 2012/11/17 06:02:53 svnexp Exp $
#

PORTNAME=	SCGI
PORTVERSION=	0.6
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VIPERCODE
PKGNAMEPREFIX=	p5-

MAINTAINER=	vivek@khera.org
COMMENT=	SCGI server interface

PERL_MODBUILD=	yes

MAN3=	SCGI.3 SCGI::Request.3

PLIST_FILES=	${SITE_PERL_REL}/SCGI.pm ${SITE_PERL_REL}/SCGI/Request.pm
PLIST_DIRS=	${SITE_PERL_REL}/SCGI

.include <bsd.port.mk>
