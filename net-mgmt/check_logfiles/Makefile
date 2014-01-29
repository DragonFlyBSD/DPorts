# $FreeBSD: net-mgmt/check_logfiles/Makefile 341123 2014-01-25 22:09:37Z bapt $

PORTNAME=	check_logfiles
PORTVERSION=	3.4.3.1
CATEGORIES=	net-mgmt
MASTER_SITES=	http://labs.consol.de/wp-content/uploads/2011/03/

MAINTAINER=	flo@FreeBSD.org
COMMENT=	Nagios plugin which scans log files for specific patterns

USES=		gmake
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	--with-trusted-path=/bin:/sbin:/usr/bin:/usr/sbin:${LOCALBASE}/bin:${LOCALBASE}/sbin \
			--libexecdir=${PREFIX}/libexec/nagios \

.include <bsd.port.mk>
