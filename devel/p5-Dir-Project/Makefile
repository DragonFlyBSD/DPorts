# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-Dir-Project/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Dir-Project
PORTVERSION=	3.024
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Project Environment determination

LICENSE=	LGPL3 ART20
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ENV+=	DIRPROJECT_PREFIX=${PREFIX}

MAN1=		project_bin.1 project_dir.1
MAN3=		Dir::Project.3

.include <bsd.port.mk>
