# New ports collection makefile for:	p5-FreeBSD-Ports
# Date created:				12 September 2001
# Whom:					Tom Hukins <tom@FreeBSD.org>
#
# $FreeBSD: ports/ports-mgmt/p5-FreeBSD-Ports/Makefile,v 1.7 2012/11/17 06:00:45 svnexp Exp $
#

PORTNAME=	FreeBSD-Ports
PORTVERSION=	0.04
CATEGORIES=	ports-mgmt perl5
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	tom
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl modules for parsing FreeBSD's Ports INDEX file

USE_BZIP2=	yes

PERL_CONFIGURE=	yes
MAN3=		FreeBSD::Ports::Port.3 \
		FreeBSD::Ports.3
.include <bsd.port.mk>
