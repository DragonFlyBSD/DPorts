# Created by: Andriy Gapon
# $FreeBSD: devel/coccinelle/Makefile 327086 2013-09-12 16:11:43Z az $

PORTNAME=	coccinelle
DISTVERSION=	0.2.4rc5
CATEGORIES=	devel
MASTER_SITES=	http://coccinelle.lip6.fr/distrib/
EXTRACT_SUFX=	.tgz

MAINTAINER=	avg@icyb.net.ua
COMMENT=	Coccinelle is a program matching and transformation engine

USES=		shebangfix gmake perl5
GNU_CONFIGURE=	yes
USE_PERL5=	build
USE_PYTHON=	2.5+
USE_OCAML=	3.0+
SHEBANG_FILES=	configure

MAN1=		spatch.1

post-patch:
	@${REINPLACE_CMD} 's|CAMLreturn0|return 0|' \
		${WRKSRC}/pycaml/pycaml_ml.c

.include <bsd.port.mk>
