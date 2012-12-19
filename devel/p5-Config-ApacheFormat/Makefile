# New ports collection makefile for:	Config::ApacheFormat
# Date created:				26 Jul 2006
# Whom:					Martin Tournoij <carpetsmoker@gmail.com>
#
# $FreeBSD: ports/devel/p5-Config-ApacheFormat/Makefile,v 1.7 2012/11/17 05:56:08 svnexp Exp $
#

PORTNAME=	Config-ApacheFormat
PORTVERSION=	1.2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Parse a configuration file in the same syntax as the Apache web server

BUILD_DEPENDS=	p5-Class-MethodMaker>=0:${PORTSDIR}/devel/p5-Class-MethodMaker \
		p5-Scalar-List-Utils>=0:${PORTSDIR}/lang/p5-Scalar-List-Utils

PERL_CONFIGURE=	yes
MAN3=		Config::ApacheFormat.3

.include <bsd.port.mk>
