# Created by: Toshiya Saitoh (<toshiya@saitoh.nu>)
# $FreeBSD: databases/pear-DB_Pager/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	DB_Pager
PORTVERSION=	0.7
CATEGORIES=	databases www pear

MAINTAINER=	toshiya@saitoh.nu
COMMENT=	PEAR Database Abstraction Layer

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/DB.php:${PORTSDIR}/databases/pear-DB
RUN_DEPENDS=	${PEARDIR}/PEAR.php:${PORTSDIR}/devel/pear \
		${PEARDIR}/DB.php:${PORTSDIR}/databases/pear-DB

PEAR_AUTOINSTALL=	yes

NO_STAGE=	yes
.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
