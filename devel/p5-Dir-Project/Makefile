# New ports collection makefile for:	p5-Dir-Project
# Date created:		2006-07-15
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-Dir-Project/Makefile,v 1.16 2012/11/17 05:56:14 svnexp Exp $
#

PORTNAME=	Dir-Project
PORTVERSION=	3.024
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Project Environment determination

LICENSE=	LGPL3 ART20
LICENSE_COMB=	dual

PERL_CONFIGURE=	yes
CONFIGURE_ENV+=	DIRPROJECT_PREFIX=${PREFIX}

MAN1=		project_bin.1 project_dir.1
MAN3=		Dir::Project.3

.include <bsd.port.mk>
