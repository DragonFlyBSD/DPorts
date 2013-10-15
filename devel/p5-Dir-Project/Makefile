# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-Dir-Project/Makefile 327724 2013-09-20 17:13:42Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
