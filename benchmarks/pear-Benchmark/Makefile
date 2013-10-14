# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: benchmarks/pear-Benchmark/Makefile 327708 2013-09-20 15:52:44Z bapt $

PORTNAME=	Benchmark
PORTVERSION=	1.2.9
CATEGORIES=	benchmarks devel www pear

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PEAR framework to benchmark PHP scripts or function calls

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear
RUN_DEPENDS:=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear

USE_PHP=	bcmath
PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
