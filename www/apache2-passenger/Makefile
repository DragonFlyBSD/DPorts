PORTNAME=		passenger
PKGNAMEPREFIX=		${RUBY_PKGNAMEPREFIX}${APACHE_PKGNAMEPREFIX}

COMMENT=		Passenger module for running Rails and Rack applications on Apache2

.include "../../www/rubygem-passenger/Makefile.common"

MAKE_JOBS_SAFE=		YES

USE_APACHE=		22+
USE_RAKE=		YES
USE_RUBY=		YES

RUN_DEPENDS=	rubygem-passenger>=3.0.17:${PORTSDIR}/www/rubygem-passenger

do-build:
	cd ${WRKSRC}/build && ${MAKE_ENV} ${RAKE_BIN} apache2:clean apache2

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ext/apache2/mod_passenger.so ${DESTDIR}${PREFIX}/${APACHEMODDIR}/mod_passenger.so

.include <bsd.port.mk>
