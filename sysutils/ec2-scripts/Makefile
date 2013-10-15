# Created by: Colin Percival
# $FreeBSD: sysutils/ec2-scripts/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	ec2-scripts
PORTVERSION=	1.5
CATEGORIES=	sysutils
MASTER_SITES=	http://freebsd-ec2-dist.s3.amazonaws.com/
EXTRACT_SUFX=	.tgz

MAINTAINER=	cperciva@FreeBSD.org
COMMENT=	Startup scripts for FreeBSD/EC2 environment

NO_BUILD=	YES
NO_INSTALL=	YES

RC_SCRIPTS=	ec2_bootmail ec2_ephemeralswap ec2_fetchkey	\
		ec2_firstboot ec2_loghostkey panicmail

.for i in ${RC_SCRIPTS}
PLIST_FILES+=	etc/rc.d/$i
.endfor

NO_STAGE=	yes
post-install:
	@for i in ${RC_SCRIPTS}; do	\
		${INSTALL_SCRIPT} ${WRKSRC}/$${i} ${PREFIX}/etc/rc.d/$${i}; \
	done

.include <bsd.port.mk>
