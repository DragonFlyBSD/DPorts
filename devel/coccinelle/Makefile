# Created by: Andriy Gapon
# $FreeBSD: ports/devel/coccinelle/Makefile,v 1.4 2013/01/16 20:13:27 svnexp Exp $

PORTNAME=	coccinelle
DISTVERSION=	0.2.4rc5
CATEGORIES=	devel
MASTER_SITES=	http://coccinelle.lip6.fr/distrib/
EXTRACT_SUFX=	.tgz

MAINTAINER=	avg@icyb.net.ua
COMMENT=	Coccinelle is a program matching and transformation engine

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_PERL5_BUILD=yes
USE_PYTHON=	2.5+
USE_OCAML=	3.0+

MAN1=		spatch.1

post-patch:
	@${REINPLACE_CMD} 's|CAMLreturn0|return 0|' \
		${WRKSRC}/pycaml/pycaml_ml.c

.include <bsd.port.mk>
