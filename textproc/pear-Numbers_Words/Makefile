# Created by: Piotr Rybicki (<meritus@innervision.pl>)
# $FreeBSD: textproc/pear-Numbers_Words/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Numbers_Words
PORTVERSION=	0.16.2
CATEGORIES=	textproc pear

MAINTAINER=	meritus@innervision.pl
COMMENT=	PEAR package provides methods for spelling numerals in words

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/Math/BigInteger.php:${PORTSDIR}/math/pear-Math_BigInteger
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/Math/BigInteger.php:${PORTSDIR}/math/pear-Math_BigInteger

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
